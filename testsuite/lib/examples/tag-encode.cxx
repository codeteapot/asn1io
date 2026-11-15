#include <iostream>

#include <asn1io/b64ostream.h>
#include <asn1io/tag.h>

using namespace asn1;
using namespace std;

int main() {
  b64_output out(cout);
  
  cout << "Result: ";
  if (tag_encode({ tc_private, 42, ts_primitive, 195 }, out))
    out.conclude();
  else
    cout << " (incomplete)";
  cout << endl;
  return EXIT_SUCCESS;
}
