
#include <iostream>

// This is your 
struct item {
  // link to next item in the list or "head"
  item *prev;

  // link to the previous item or "head"
  item *next;

  // the value in the list
  int value;

  item(int value=0) : value(value) {}
};
    
// The 
class double_linked_list {
public:
  // placeholder for you to replace.
  nullptr_t WHAT = nullptr;

  // The head item is the first and last in the list.
  // head <-> one <-> two <-> three <-> head
  item head;

  double_linked_list() {
    // at the start, the head points to itself.
    head.prev = head.next = &head;
  }

  item *insert(int value) {
    item *new_item = new item(value);
    new_item->prev = &head;
    new_item->next = WHAT; // fill this in
    head.prev = WHAT; // fill this in
    head.next = new_item;
  }

  item *insert_after(item *prev, int value) {
    item *next = prev->next;
    item *new_item = new item(value);
    new_item->prev = &head;
    new_item->next = WHAT; // fill this in
    prev->next = WHAT; // fill this in
    next->prev = WHAT; // fill this in
  }

  item *find(int value) {
     // write a loop here to return the first element with this value
  }

  item *get_first() {
     return head.next;
  }

  void remove(item *victim) {
      item *prev = victim->prev;
      item *next = victim->prev;
      victim->prev = WHAT; // fill this in
      victim->next = WHAT; // fill this in
      prev->next = WHAT; // fill this in
      next->prev = WHAT; // fill this in
  }

  void dump(std::ostream &os) {
    for (item *it = head.next; it != &head; it = it->next) {
      os << "item " << it << " has value " << it->value << "\n";
    }
  }
    
  // unit test
  void unit_test() {
    double_linked_list my_list;
    my_list.insert(1);
    my_list.insert(2);
    my_list.insert(3);
    my_list.insert(4);
    my_list.dump(std::cout);
    auto two = my_list.find(2);
    my_list.remove(two);
    my_list.dump(std::cout);
    auto three = my_list.find(3);
    my_list.insert_after(three, 33);
    my_list.dump(std::cout);
  }
};

int main() {
  double_linked_list my_list;
  my_list.unit_test();
}

