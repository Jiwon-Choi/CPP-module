#include "Data.hpp"

Data::Data(void) : id_("jiwchoi"), blackHole_(28), level_(4.44) {}
Data::Data(const Data & ref) : id_(ref.id_), blackHole_(ref.blackHole_), level_(ref.level_) {}
Data::~Data(void) {}

Data & Data::operator=(const Data & ref) {
    id_ = ref.id_;
    blackHole_ = ref.blackHole_;
    level_ = ref.level_;
    return (*this);
}

const std::string & Data::getId(void) const {
    return (id_);
}

const int & Data::getBlackHole(void) const {
    return (blackHole_);
}

const double & Data::getLevel(void) const {
    return (level_);
}

uintptr_t serialize(Data * ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data * deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}
