#include <iostream>

#include <asn1io/tag.h>

using namespace asn1;
using namespace std;

int main() {
  cout << "Size: " << tag_sizeof({ tc_private, 42, ts_primitive, 195 }) << endl;
  return EXIT_SUCCESS;
}
