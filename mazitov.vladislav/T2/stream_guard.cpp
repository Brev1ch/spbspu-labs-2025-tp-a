#include "stream_guard.hpp"

mazitov::StreamGuard::StreamGuard(std::basic_ios< char >& s):
  s_(s),
  fill_(s.fill()),
  precision_(s.precision()),
  width_(s.width()),
  flags_(s.flags())
{}

mazitov::StreamGuard::~StreamGuard()
{
  s_.fill(fill_);
  s_.precision(precision_);
  s_.width(width_);
  s_.flags(flags_);
}
