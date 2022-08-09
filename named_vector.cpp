#include <iostream>
#include <string>

// pushback,clear,size,print

template <class T>

class named_vector {

  int size;
  T *vector_value;

public:                                   // degisken tanimlama
  named_vector() { vector_value = NULL; } // degisken girilmediginde null

  named_vector(const T *v_type,
               const int vec_size) // bos tanimlama ya da
                                   //(degisken tipi,eleman sayisi) formatı
  {
    size = vec_size;
    vector_value = new T[vec_size]; //????? vector_valueya aktarma emin değilim
    for (int i = 0; i < arr_size; i++) {
      vec[i] = arr[i]; // vec_size boyutunda yeni dizi içine de for ile
                       // elemanları atma
    }
  }

  void print() {
    for (int i = 0; i < size - 1; i++) { // elemanlari yazdirma
      std::cout << vector_value[i] << " ";
    }
  }
  void print_size() {
    std::cout << "Size of vec : " << size << std::endl;
  } // boyutu yazdirma

  void pushback(const T new_value) {
    // eleman ekleme farklı tiplerde eklemek için pdfdeki gibi const T* ile
    // oluşturuldu
    T *temp = ? ? ?
  }
  void delete_all() {
    memset(???,0,size);//tüm elemanları silmek için fonk.??
  }
}
