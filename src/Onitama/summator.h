#pragma once

#include <godot_cpp/classes/object.hpp>

using namespace godot;

class Summator : public Object {
    GDCLASS(Summator, Object);

private:
    int count;

protected:
    static void _bind_methods();

public:
    Summator();

    void add(int p_value);
    void reset();
    int get_total() const;
};