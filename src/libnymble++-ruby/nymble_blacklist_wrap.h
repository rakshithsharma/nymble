#ifndef __NYMBLE_BLACKLIST_WRAP_H__
#define __NYMBLE_BLACKLIST_WRAP_H__

#include "ruby.h"
#include "nymble_wrap_util.h"
#include "nymble_blacklist.h"

extern VALUE rb_cBlacklist;

VALUE rb_blacklist_unmarshall(VALUE rb_self, VALUE rb_bytes);
VALUE rb_blacklist_marshall(VALUE rb_self);

void rb_blacklist_delete(Blacklist* blacklist);

#endif