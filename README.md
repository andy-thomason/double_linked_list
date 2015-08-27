
Double linked list test
=======================

This test guides you through the basics of building a double linked list
which is a favourite for interview tests.

Edit the file main.cpp and make the tests work.

Convert the class into a template class

template <class Type>
struct typed_item {
  ...
};

template <class Type>
class double_linked_list {
  typedef typed_item<Type> item;
  ...
};

Check that this works with:

double_linked_list<float> my_list;
