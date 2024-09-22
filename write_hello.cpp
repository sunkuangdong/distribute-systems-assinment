#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    // Check if the filename is provided as an argument
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    // Retrieve the filename from the command-line arguments
    std::string filename = argv[1];

    // Open the file in write mode (std::ofstream::trunc) to override if it exists
    std::ofstream file(filename, std::ios::out | std::ios::trunc);
    if (!file) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    // Write the desired text to the file
    file << "Hello Distributed Systems World!" << std::endl;

    // Close the file
    file.close();

    // Indicate successful completion
    std::cout << "Text written to file: " << filename << std::endl;
    return 0;
}
