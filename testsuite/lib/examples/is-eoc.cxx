#include <iostream>

#include <asn1io/univ.h>

using namespace asn1;
using namespace asn1::univ;
using namespace std;

int main() {
  cout << boolalpha
    << "#1: " << is_eoc({ tc_private, tn_eoc, ts_primitive, 0 }) << endl
    << "#2: " << is_eoc({ tc_universal, tn_boolean, ts_primitive, 0 }) << endl
    << "#3: " << is_eoc({ tc_universal, tn_eoc, ts_constructed_definite, 0 }) << endl
    << "#4: " << is_eoc({ tc_universal, tn_eoc, ts_primitive, 0 }) << endl
    << "#5: " << is_eoc({ tc_universal, tn_eoc, ts_primitive, 20 }) << endl
    << "#6: " << is_eoc({ tc_universal, tn_eoc, ts_primitive, 20 }, false) << endl;
  return EXIT_SUCCESS;
}
