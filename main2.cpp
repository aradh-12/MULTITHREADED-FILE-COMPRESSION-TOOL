#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
#include <mutex>
#include <chrono>
#include <sstream>

using namespace std;
using namespace std::chrono;

mutex mtx;

string runLengthEncode(const string &input) {
    stringstream ss;
    int count = 1;
    for (size_t i = 1; i <= input.length(); ++i) {
        if (i < input.length() && input[i] == input[i - 1]) {
            count++;
        } else {
            ss << input[i - 1] << count;
            count = 1;
        }
    }
    return ss.str();
}

void decompressChunk(const string &data, int start, int end, string &result) {
    string local;
    for (int i = start; i < end;) {
        char ch = data[i++];
        string num;
        while (i < end && isdigit(data[i])) {
            num += data[i++];
        }
        int count = stoi(num);
        local += string(count, ch);
    }
    lock_guard<mutex> lock(mtx);
    result += local;
}

string decompressSingleThread(const string &data) {
    string result;
    for (size_t i = 0; i < data.length();) {
        char ch = data[i++];
        string num;
        while (i < data.length() && isdigit(data[i])) {
            num += data[i++];
        }
        int count = stoi(num);
        result += string(count, ch);
    }
    return result;
}

int main() {
    // Step 1: Read input
    ifstream inFile("input.txt");
    if (!inFile) {
        cerr << "Error: input.txt not found!" << endl;
        return 1;
    }

    string original((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
    inFile.close();

    // Step 2: Compress and write to file
    string compressed = runLengthEncode(original);
    ofstream compFile("compressed.txt");
    compFile << compressed;
    compFile.close();

    // Step 3: Multi-threaded Decompression
    string result_mt;
    int mid = compressed.length() / 2;

    auto mt_start = high_resolution_clock::now();
    thread t1(decompressChunk, ref(compressed), 0, mid, ref(result_mt));
    thread t2(decompressChunk, ref(compressed), mid, compressed.length(), ref(result_mt));
    t1.join();
    t2.join();
    auto mt_end = high_resolution_clock::now();
    auto mt_time = duration_cast<milliseconds>(mt_end - mt_start).count();

    ofstream outMT("output_mt.txt");
    outMT << result_mt;
    outMT.close();

    // Step 4: Single-threaded Decompression
    auto st_start = high_resolution_clock::now();
    string result_st = decompressSingleThread(compressed);
    auto st_end = high_resolution_clock::now();
    auto st_time = duration_cast<milliseconds>(st_end - st_start).count();

    ofstream outST("output_st.txt");
    outST << result_st;
    outST.close();

    // Step 5: Display timings
    cout << " Compression done. Compressed data saved to compressed.txt" << endl;
    cout << " Multi-threaded Decompression Time: " << mt_time << " ms" << endl;
    cout << " Single-threaded Decompression Time: " << st_time << " ms" << endl;
    cout << " Outputs saved to output_mt.txt and output_st.txt" << endl;

    return 0;
}
