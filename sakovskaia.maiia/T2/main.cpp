#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "data_struct.hpp"

using namespace sakovskaia;
int main()
{
  try
  {
    std::vector< DataStruct > data_struct;
    while (!std::cin.eof())
    {
      std::copy(std::istream_iterator< DataStruct >(std::cin), std::istream_iterator< DataStruct >(), std::back_inserter(data_struct));
      if (!std::cin)
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits< std::streamsize >::max(), "\n");
      }
    }
    std::sort(data_struct.begin(), data_struct.end());
    std::copy(data_struct.cbegin(), data_struct.cend(), std::ostream_iterator< DataStruct >(std::cout, "\n"));
  }
}
