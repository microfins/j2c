// Generated from /runtime/java/util/Properties.java
#include <java/util/Properties_Parser.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Map.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

java::util::Properties_Parser::Properties_Parser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Properties_Parser::Properties_Parser()
    : Properties_Parser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void java::util::Properties_Parser::ctor()
{
    super::ctor();
    init();
}

void java::util::Properties_Parser::init()
{
    key = nullptr;
    value = nullptr;
    current = nullptr;
}

void java::util::Properties_Parser::append(int32_t c)
{
    if(current == nullptr) {
        if(key == nullptr) {
            current = key = new ::java::lang::StringBuilder();
        } else {
            current = value = new ::java::lang::StringBuilder();
        }
    }
    npc(current)->append(static_cast< char16_t >(c));
}

void java::util::Properties_Parser::finishLine(Map* map)
{
    if(key != nullptr) {
        npc(map)->put(npc(key)->toString(), (value == nullptr ? u""_j : npc(npc(value)->toString())->trim()));
    }
    key = value = current = nullptr;
}

char16_t java::util::Properties_Parser::readUtf16() /* throws(IOException) */
{
    char16_t c = int32_t(0);
    for (auto i = int32_t(0); i < 4; ++i) {
        auto digit = ::java::lang::Character::digit(static_cast< char16_t >(readCharacter()), 16);
        if(digit == -int32_t(1))
            throw new ::java::io::IOException(u"Invalid Unicode escape encountered."_j);

        c <<= 4;
        c |= digit;
    }
    return c;
}

void java::util::Properties_Parser::parse(Map* map) /* throws(IOException) */
{
    auto escaped = false;
    int32_t c;
    while ((c = readCharacter()) != -int32_t(1)) {
        if(c == u'\\') {
            if(escaped) {
                escaped = false;
                append(c);
            } else {
                escaped = true;
            }
        } else {
            switch (c) {
            case u'#':
            case u'!':
                if(key == nullptr) {
                    while ((c = readCharacter()) != -int32_t(1) && c != u'\u000a') 
                                                ;

                } else {
                    append(c);
                }
                break;
            case u' ':
            case u'\u000d':
            case u'\u0009':
                if(escaped || (current != nullptr && value == current)) {
                    append(c);
                } else if(key == current) {
                    current = nullptr;
                }
                break;
            case u':':
            case u'=':
                if(escaped || (current != nullptr && value == current)) {
                    append(c);
                } else {
                    if(key == nullptr) {
                        key = new ::java::lang::StringBuilder();
                    }
                    current = nullptr;
                }
                break;
            case u'\u000a':
                if(escaped) {
                    append(c);
                } else {
                    finishLine(map);
                }
                break;
            case u'n':
                if(escaped) {
                    append(u'\u000a');
                } else {
                    append(c);
                }
                break;
            case u'u':
                if(escaped) {
                    append(readUtf16());
                } else {
                    append(c);
                }
                break;
            default:
                append(c);
                break;
            }

            escaped = false;
        }
    }
    finishLine(map);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Properties_Parser::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Properties.Parser", 27);
    return c;
}

java::lang::Class* java::util::Properties_Parser::getClass0()
{
    return class_();
}

