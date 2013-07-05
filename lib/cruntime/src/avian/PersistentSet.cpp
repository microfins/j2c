// Generated from /runtime/avian/PersistentSet.java
#include <avian/PersistentSet.hpp>

#include <avian/Cell.hpp>
#include <avian/PersistentSet_PersistentSet_1.hpp>
#include <avian/PersistentSet_Iterator.hpp>
#include <avian/PersistentSet_Node.hpp>
#include <avian/PersistentSet_Path.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Iterator.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::PersistentSet::PersistentSet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::PersistentSet::PersistentSet() 
    : PersistentSet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

avian::PersistentSet::PersistentSet(::java::util::Comparator* comparator) 
    : PersistentSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(comparator);
}

avian::PersistentSet::PersistentSet(PersistentSet_Node* root, ::java::util::Comparator* comparator, int32_t size) 
    : PersistentSet(*static_cast< ::default_init_tag* >(0))
{
    ctor(root,comparator,size);
}

avian::PersistentSet_Node*& avian::PersistentSet::NullNode()
{
    clinit();
    return NullNode_;
}
avian::PersistentSet_Node* avian::PersistentSet::NullNode_;

void avian::PersistentSet::ctor()
{
    ctor(NullNode(), new PersistentSet_PersistentSet_1(this), int32_t(0));
}

void avian::PersistentSet::ctor(::java::util::Comparator* comparator)
{
    ctor(NullNode(), comparator, int32_t(0));
}

void avian::PersistentSet::ctor(PersistentSet_Node* root, ::java::util::Comparator* comparator, int32_t size)
{
    super::ctor();
    this->root = root;
    this->comparator_ = comparator;
    this->size_ = size;
}

java::lang::String* avian::PersistentSet::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"{"_j);
    for (auto *it = iterator(); npc(it)->hasNext(); ) {
        npc(sb)->append(java_cast< ::java::lang::Object* >(npc(it)->next()));
        if(npc(it)->hasNext()) {
            npc(sb)->append(u","_j);
        }
    }
    npc(sb)->append(u"}"_j);
    return npc(sb)->toString();
}

java::util::Comparator* avian::PersistentSet::comparator()
{
    return comparator_;
}

avian::PersistentSet* avian::PersistentSet::add(::java::lang::Object* value)
{
    return add(value, false);
}

int32_t avian::PersistentSet::size()
{
    return size_;
}

avian::PersistentSet* avian::PersistentSet::add(::java::lang::Object* value, bool replaceExisting)
{
    auto p = find(value);
    if(!npc(p)->fresh_) {
        if(replaceExisting) {
            return npc(p)->replaceWith(value);
        } else {
            return this;
        }
    }
    return add(p);
}

avian::PersistentSet* avian::PersistentSet::add(PersistentSet_Path* p)
{
    if(!npc(p)->fresh_)
        throw new ::java::lang::IllegalArgumentException();

    auto new_ = npc(p)->node;
    auto newRoot = npc(npc(p)->root_)->root;
    auto ancestors = npc(p)->ancestors;
    npc(new_)->red = true;
    while (ancestors != nullptr && npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red) {
        if(static_cast< ::java::lang::Object* >(java_cast< PersistentSet_Node* >(npc(ancestors)->value)) == static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left)) {
            if(npc(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right)->red) {
                npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = false;
                npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right = new PersistentSet_Node(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right);
                npc(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right)->red = false;
                npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->red = true;
                new_ = java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value);
                ancestors = npc(npc(ancestors)->next)->next;
            } else {
                if(static_cast< ::java::lang::Object* >(new_) == static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right)) {
                    new_ = java_cast< PersistentSet_Node* >(npc(ancestors)->value);
                    ancestors = npc(ancestors)->next;
                    auto n = leftRotate(new_);
                    if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right) == static_cast< ::java::lang::Object* >(new_)) {
                        npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right = n;
                    } else {
                        npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left = n;
                    }
                    ancestors = new Cell(n, ancestors);
                }
                npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = false;
                npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->red = true;
                auto n = rightRotate(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value));
                if(npc(npc(ancestors)->next)->next == nullptr) {
                    newRoot = n;
                } else if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(npc(npc(ancestors)->next)->next)->value))->right) == static_cast< ::java::lang::Object* >(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))) {
                    npc(java_cast< PersistentSet_Node* >(npc(npc(npc(ancestors)->next)->next)->value))->right = n;
                } else {
                    npc(java_cast< PersistentSet_Node* >(npc(npc(npc(ancestors)->next)->next)->value))->left = n;
                }
            }
        } else {
            if(npc(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left)->red) {
                npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = false;
                npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left = new PersistentSet_Node(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left);
                npc(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left)->red = false;
                npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->red = true;
                new_ = java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value);
                ancestors = npc(npc(ancestors)->next)->next;
            } else {
                if(static_cast< ::java::lang::Object* >(new_) == static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left)) {
                    new_ = java_cast< PersistentSet_Node* >(npc(ancestors)->value);
                    ancestors = npc(ancestors)->next;
                    auto n = rightRotate(new_);
                    if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right) == static_cast< ::java::lang::Object* >(new_)) {
                        npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right = n;
                    } else {
                        npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left = n;
                    }
                    ancestors = new Cell(n, ancestors);
                }
                npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = false;
                npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->red = true;
                auto n = leftRotate(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value));
                if(npc(npc(ancestors)->next)->next == nullptr) {
                    newRoot = n;
                } else if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(npc(npc(ancestors)->next)->next)->value))->right) == static_cast< ::java::lang::Object* >(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))) {
                    npc(java_cast< PersistentSet_Node* >(npc(npc(npc(ancestors)->next)->next)->value))->right = n;
                } else {
                    npc(java_cast< PersistentSet_Node* >(npc(npc(npc(ancestors)->next)->next)->value))->left = n;
                }
            }
        }
    }
    npc(newRoot)->red = false;
    return new PersistentSet(newRoot, comparator_, size_ + int32_t(1));
}

/* <T> */avian::PersistentSet_Node* avian::PersistentSet::leftRotate(PersistentSet_Node* n)
{
    clinit();
    auto child = new PersistentSet_Node(npc(n)->right);
    npc(n)->right = npc(child)->left;
    npc(child)->left = n;
    return child;
}

/* <T> */avian::PersistentSet_Node* avian::PersistentSet::rightRotate(PersistentSet_Node* n)
{
    clinit();
    auto child = new PersistentSet_Node(npc(n)->left);
    npc(n)->left = npc(child)->right;
    npc(child)->right = n;
    return child;
}

avian::PersistentSet* avian::PersistentSet::remove(::java::lang::Object* value)
{
    auto p = find(value);
    if(!npc(p)->fresh_) {
        return remove(p);
    }
    return this;
}

avian::PersistentSet* avian::PersistentSet::remove(PersistentSet_Path* p)
{
    if(size_ == 1) {
        if(npc(p)->node != root) {
            throw new ::java::lang::IllegalArgumentException();
        }
        return new PersistentSet(NullNode(), comparator_, int32_t(0));
    }
    auto new_ = npc(p)->node;
    auto newRoot = npc(npc(p)->root_)->root;
    auto ancestors = npc(p)->ancestors;
    PersistentSet_Node* dead;
    if(npc(new_)->left == NullNode() || npc(new_)->right == NullNode()) {
        dead = new_;
    } else {
        auto path = successor(new_, ancestors);
        dead = java_cast< PersistentSet_Node* >(npc(path)->value);
        ancestors = npc(path)->next;
    }
    PersistentSet_Node* child;
    if(npc(dead)->left != NullNode()) {
        child = new PersistentSet_Node(npc(dead)->left);
    } else if(npc(dead)->right != NullNode()) {
        child = new PersistentSet_Node(npc(dead)->right);
    } else {
        child = NullNode();
    }
    if(ancestors == nullptr) {
        npc(child)->red = false;
        return new PersistentSet(child, comparator_, int32_t(1));
    } else if(static_cast< ::java::lang::Object* >(dead) == static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left)) {
        npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left = child;
    } else {
        npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right = child;
    }
    if(dead != new_) {
        npc(new_)->value = java_cast< ::java::lang::Object* >(npc(dead)->value);
    }
    if(!npc(dead)->red) {
        while (ancestors != nullptr && !npc(child)->red) {
            if(static_cast< ::java::lang::Object* >(child) == static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left)) {
                auto sibling = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right = new PersistentSet_Node(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right);
                if(npc(sibling)->red) {
                    npc(sibling)->red = false;
                    npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = true;
                    auto n = leftRotate(java_cast< PersistentSet_Node* >(npc(ancestors)->value));
                    if(npc(ancestors)->next == nullptr) {
                        newRoot = n;
                    } else if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right) == static_cast< ::java::lang::Object* >(java_cast< PersistentSet_Node* >(npc(ancestors)->value))) {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right = n;
                    } else {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left = n;
                    }
                    npc(ancestors)->next = new Cell(n, npc(ancestors)->next);
                    sibling = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right = new PersistentSet_Node(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right);
                }
                if(!(npc(npc(sibling)->left)->red || npc(npc(sibling)->right)->red)) {
                    npc(sibling)->red = true;
                    child = java_cast< PersistentSet_Node* >(npc(ancestors)->value);
                    ancestors = npc(ancestors)->next;
                } else {
                    if(!npc(npc(sibling)->right)->red) {
                        npc(sibling)->left = new PersistentSet_Node(npc(sibling)->left);
                        npc(npc(sibling)->left)->red = false;
                        npc(sibling)->red = true;
                        sibling = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right = rightRotate(sibling);
                    }
                    npc(sibling)->red = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red;
                    npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = false;
                    npc(sibling)->right = new PersistentSet_Node(npc(sibling)->right);
                    npc(npc(sibling)->right)->red = false;
                    auto n = leftRotate(java_cast< PersistentSet_Node* >(npc(ancestors)->value));
                    if(npc(ancestors)->next == nullptr) {
                        newRoot = n;
                    } else if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right) == static_cast< ::java::lang::Object* >(java_cast< PersistentSet_Node* >(npc(ancestors)->value))) {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right = n;
                    } else {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left = n;
                    }
                    child = newRoot;
                    ancestors = nullptr;
                }
            } else {
                auto sibling = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left = new PersistentSet_Node(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left);
                if(npc(sibling)->red) {
                    npc(sibling)->red = false;
                    npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = true;
                    auto n = rightRotate(java_cast< PersistentSet_Node* >(npc(ancestors)->value));
                    if(npc(ancestors)->next == nullptr) {
                        newRoot = n;
                    } else if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left) == static_cast< ::java::lang::Object* >(java_cast< PersistentSet_Node* >(npc(ancestors)->value))) {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left = n;
                    } else {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right = n;
                    }
                    npc(ancestors)->next = new Cell(n, npc(ancestors)->next);
                    sibling = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left = new PersistentSet_Node(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left);
                }
                if(!(npc(npc(sibling)->right)->red || npc(npc(sibling)->left)->red)) {
                    npc(sibling)->red = true;
                    child = java_cast< PersistentSet_Node* >(npc(ancestors)->value);
                    ancestors = npc(ancestors)->next;
                } else {
                    if(!npc(npc(sibling)->left)->red) {
                        npc(sibling)->right = new PersistentSet_Node(npc(sibling)->right);
                        npc(npc(sibling)->right)->red = false;
                        npc(sibling)->red = true;
                        sibling = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->left = leftRotate(sibling);
                    }
                    npc(sibling)->red = npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red;
                    npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->red = false;
                    npc(sibling)->left = new PersistentSet_Node(npc(sibling)->left);
                    npc(npc(sibling)->left)->red = false;
                    auto n = rightRotate(java_cast< PersistentSet_Node* >(npc(ancestors)->value));
                    if(npc(ancestors)->next == nullptr) {
                        newRoot = n;
                    } else if(static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left) == static_cast< ::java::lang::Object* >(java_cast< PersistentSet_Node* >(npc(ancestors)->value))) {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->left = n;
                    } else {
                        npc(java_cast< PersistentSet_Node* >(npc(npc(ancestors)->next)->value))->right = n;
                    }
                    child = newRoot;
                    ancestors = nullptr;
                }
            }
        }
        npc(child)->red = false;
    }
    return new PersistentSet(newRoot, comparator_, size_ - int32_t(1));
}

/* <T> */avian::Cell* avian::PersistentSet::minimum(PersistentSet_Node* n, Cell* ancestors)
{
    clinit();
    while (npc(n)->left != NullNode()) {
        npc(n)->left = new PersistentSet_Node(npc(n)->left);
        ancestors = new Cell(n, ancestors);
        n = npc(n)->left;
    }
    return new Cell(n, ancestors);
}

/* <T> */avian::Cell* avian::PersistentSet::successor(PersistentSet_Node* n, Cell* ancestors)
{
    clinit();
    if(npc(n)->right != NullNode()) {
        npc(n)->right = new PersistentSet_Node(npc(n)->right);
        return minimum(npc(n)->right, new Cell(n, ancestors));
    }
    while (ancestors != nullptr && static_cast< ::java::lang::Object* >(n) == static_cast< ::java::lang::Object* >(npc(java_cast< PersistentSet_Node* >(npc(ancestors)->value))->right)) {
        n = java_cast< PersistentSet_Node* >(npc(ancestors)->value);
        ancestors = npc(ancestors)->next;
    }
    return ancestors;
}

avian::PersistentSet_Path* avian::PersistentSet::find(::java::lang::Object* value)
{
    auto newRoot = new PersistentSet_Node(root);
    Cell* ancestors = nullptr;
    auto old = root;
    auto new_ = newRoot;
    while (static_cast< ::java::lang::Object* >(old) != static_cast< ::java::lang::Object* >(NullNode())) {
        ancestors = new Cell(new_, ancestors);
        auto difference = npc(comparator_)->compare(value, java_cast< ::java::lang::Object* >(npc(old)->value));
        if(difference < 0) {
            old = npc(old)->left;
            new_ = npc(new_)->left = new PersistentSet_Node(old);
        } else if(difference > 0) {
            old = npc(old)->right;
            new_ = npc(new_)->right = new PersistentSet_Node(old);
        } else {
            return new PersistentSet_Path(false, new_, new PersistentSet(newRoot, comparator_, size_), npc(ancestors)->next);
        }
    }
    npc(new_)->value = value;
    return new PersistentSet_Path(true, new_, new PersistentSet(newRoot, comparator_, size_), ancestors);
}

avian::PersistentSet_Path* avian::PersistentSet::first()
{
    if(static_cast< ::java::lang::Object* >(root) == static_cast< ::java::lang::Object* >(NullNode()))
        return nullptr;

    auto newRoot = new PersistentSet_Node(root);
    Cell* ancestors = nullptr;
    auto old = root;
    auto new_ = newRoot;
    while (npc(old)->left != NullNode()) {
        ancestors = new Cell(new_, ancestors);
        old = npc(old)->left;
        new_ = npc(new_)->left = new PersistentSet_Node(old);
    }
    return new PersistentSet_Path(true, new_, new PersistentSet(newRoot, comparator_, size_), ancestors);
}

avian::PersistentSet_Path* avian::PersistentSet::last()
{
    if(static_cast< ::java::lang::Object* >(root) == static_cast< ::java::lang::Object* >(NullNode()))
        return nullptr;

    auto newRoot = new PersistentSet_Node(root);
    Cell* ancestors = nullptr;
    auto old = root;
    auto new_ = newRoot;
    while (npc(old)->right != NullNode()) {
        ancestors = new Cell(new_, ancestors);
        old = npc(old)->right;
        new_ = npc(new_)->right = new PersistentSet_Node(old);
    }
    return new PersistentSet_Path(true, new_, new PersistentSet(newRoot, comparator_, size_), ancestors);
}

java::util::Iterator* avian::PersistentSet::iterator()
{
    return new PersistentSet_Iterator(this, static_cast< PersistentSet_Path* >(first()));
}

avian::PersistentSet_Path* avian::PersistentSet::successor(PersistentSet_Path* p)
{
    auto s = successor(npc(p)->node, npc(p)->ancestors);
    if(s == nullptr) {
        return nullptr;
    } else {
        return new PersistentSet_Path(false, java_cast< PersistentSet_Node* >(npc(s)->value), npc(p)->root_, npc(s)->next);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::PersistentSet::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.PersistentSet", 19);
    return c;
}

void avian::PersistentSet::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NullNode_ = new PersistentSet_Node(nullptr);
        {
            npc(NullNode())->left = NullNode();
            npc(NullNode())->right = NullNode();
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* avian::PersistentSet::getClass0()
{
    return class_();
}

