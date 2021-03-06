//
// Author: Ping Chen
// Date: 2017.04.06
//

#ifndef BASE64_H_
#define BASE64_H_

#include <string>

namespace base64 {

std::string base64_encode(const char *encode_bytes, unsigned int bytes_len);
std::string base64_encode(const std::string & encode_str);

std::string base64_decode(const char *decode_bytes, unsigned int bytes_len);
std::string base64_decode(const std::string & decode_str);

} // namespace base64

#endif // BASE64_H_
