#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>

int main() {

    std::string test("this is my test sentence");

    // this creates a string stream that basically tokenizes the
    // sentence "test" into words (since a stream breaks on spaces)

    std::istringstream is(test);

    // by using iterators here, we can fill the vector "words" without
    // having to explicitly write out a loop.
    // the first std::istream_iterator acts as the "begin()" (since the
    // iterator is initialized to the beginning of the stream), but this
    // returns temporary strings, so we need to get the "end()" another way,
    // what's what the second std::istream_iterator does -- the default
    // constructor signifies the end of a range.

    std::vector<std::string> words(std::istream_iterator<std::string>{is},
                                   std::istream_iterator<std::string>{  });

    for (auto const& w : words) {

        std::cout << w << std::endl;

    }

}
