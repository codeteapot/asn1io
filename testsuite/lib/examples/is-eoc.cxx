#include <iostream>

#include <asn1io/tag.h>

using namespace asn1;
using namespace std;

int main() {
  cout << boolalpha
    << "#1: " << is_eoc({ tc_private, 0, ts_primitive, 0 }) << endl
    << "#2: " << is_eoc({ tc_universal, 1, ts_primitive, 0 }) << endl
    << "#3: " << is_eoc({ tc_universal, 0, ts_constructed_definite, 0 }) << endl
    << "#4: " << is_eoc({ tc_universal, 0, ts_primitive, 0 }) << endl
    << "#5: " << is_eoc({ tc_universal, 0, ts_primitive, 20 }) << endl
    << "#6: " << is_eoc({ tc_universal, 0, ts_primitive, 20 }, false) << endl;
  return EXIT_SUCCESS;
}
