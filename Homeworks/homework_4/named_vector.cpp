#include <cstdlib>
#include <ctime>
#include <iostream>

// pushback,clear,size,print

template <class T>

class my_vector {

  T data;
  my_vector<T> *next, *prev;
};

template <class T> class link {
  my_vector<class T><T> *head, *tail;

public:
  link() { head = tail = nullptr; }
  link(const link<T> &my_ptr) {
    head = tail = nullptr;
    *this = my_ptr;
  }
  link<T> &operator=(const link<T> &my_ptr) {
    if (this == &my_ptr)
      return *this;
    clear();
    head = nullptr;
    tail = nullptr;

    my_vector<T> *curr = my_ptr.head;
    while (curr != nullptr) {
      this->push_head(curr->data);
      curr = curr->next;
    }
    return *this;
  }

  link<T> &operator+(const link<T> second) {

    my_vector<T> *secondmy_vector;
    link<T> thetoal;

    secondmy_vector = second.head;

    while (secondmy_vector != nullptr) {
      this->push_back(secondmy_vector->data);
      secondmy_vector = secondmy_vector->next;
    }

    return *this;
  }

  ~link() {
    clear();
    head = tail = nullptr;
  }
  void clear() {
    if (head == nullptr)
      cout << "Memory is all clear" << endl;
    else {
      while (head != nullptr && head != tail) {
        my_vector<T> *curr = head;
        head = head->next;
        delete curr;
      }
    }
  }
  void push_back(T data) {
    my_vector<T> *curr = new my_vector<T>;
    curr->data = data;
    curr->next = curr->prev = nullptr;
    if (head == nullptr) {
      head = tail = curr;
      return;
    }
    curr->prev = tail;
    tail->next = curr;
    tail = curr;
    return;
  }

  void push_head(T data) {
    my_vector<T> *curr = new my_vector<T>;
    curr->data = data;
    curr->next = curr->prev = nullptr;
    if (head == nullptr) {
      head = tail = curr;
      return;
    }
    curr->next = head;
    head->prev = curr;
    head = curr;
    return;
  }
  void print() {
    my_vector<T> *curr = head;
    while (curr != nullptr) {
      cout << curr->data << " ";
      curr = curr->next;
    }
  }

  void remove(T d) {
    if (head == nullptr) {
      cout << "no my_vector in the link";
    } else {
      my_vector<T> *curr = head;
      my_vector<T> *prev = 0;
      while (curr != nullptr) {
        if (curr->data == d)
          break;
        else {
          prev = curr;
          curr = curr->next;
        }
      }
      // case 2
      if (curr == 0) {
        cout << "wrong name might be input" << endl;
      } else {
        // delete head
        if (head == curr) {
          // head->prev = head->next->prev;
          head = head->next;
        }
        // delete non-dead
        else {
          prev->next = curr->next;
        }
        delete curr;
      }
    }
  }
};
