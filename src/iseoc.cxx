#include <asn1io/tag.h>

using namespace asn1;

bool asn1::is_eoc(tag_header const& th, bool strict) noexcept {
  return th.tclass == tc_universal
    and th.number == 0
    and th.shape == ts_primitive
    and (th.length == 0 or not strict);
}
