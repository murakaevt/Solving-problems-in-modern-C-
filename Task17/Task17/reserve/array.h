#pragma once
#include <utility>
#include <iostream>

template<typename Type>
class Array{
public:
using Iterator = Type**;
using ConstIterator = const Type**;

Array() = default;

explicit Array(const std::size_t& row, const std::size_t& col) {
    if(row == 0 && col == 0){
        array_ptr_ = nullptr;
    } else {
auto ptr = new Type*[row];
for(int i = 0; i < row; ++i){
    ptr[i] = new Type[col];
}
array_ptr_ = ptr;
    }
    row_ = row;
    col_ = col;
}

Type** Get() const noexcept {

        return array_ptr_;
    }

const Type& At(std::size_t row, std::size_t col) const{
return array_ptr_[row][col];
}

Type* Data(){
    return *array_ptr_;
}

std::size_t Size(){
    return row_*col_;
}

void Add(std::size_t row, std::size_t col, Type& value){
    if(row < row_ && col < col_){
array_ptr_[row][col] = value;
    } 
}

void Permutation(std::size_t row1, std::size_t col1, std::size_t row2, std::size_t col2){
    if(row1 < row_ && col1 < col_ && row2 < row_ && col2 < col_){
        Type buf = array_ptr_[row1][col1];
array_ptr_[row1][col1] = array_ptr_[row2][col2];
array_ptr_[row2][col2] = buf;
    } 
}

void Permutation(Type& value1, Type& value2){
    Type* buf1 = nullptr;
    Type* buf2 = nullptr;
    for(int row = 0; row < row_; ++row){
        for(int col = 0; col < col_; ++col){
            if(array_ptr_[row][col] == value1){
                buf1 = &array_ptr_[row][col];
            } else if(array_ptr_[row][col] == value2){
                buf2 = &array_ptr_[row][col];
            }
        }
    }
    if(buf1 != nullptr && buf2 != nullptr){
        Type buf = *buf2;
        *buf2 = *buf1;
        *buf1 = buf;
    }
} 

void Print(){
    std::cout << "2-х мерный массив:" << std::endl;
   for(int row = 0; row < row_; ++row){
        for(int col = 0; col < col_; ++col){
            std::cout << array_ptr_[row][col] << "  ";
        }
       std::cout << std::endl;
    }
}

    // ¬озвращает итератор на начало массива
    // ƒл€ пустого массива может быть равен (или не равен) nullptr
    Iterator begin() noexcept {
        return Iterator(Get());
    }

    // ¬озвращает итератор на элемент, следующий за последним
    // ƒл€ пустого массива может быть равен (или не равен) nullptr
    Iterator end() noexcept {
        return Iterator(Get() + row_);
    }

    // ¬озвращает константный итератор на начало массива
    // ƒл€ пустого массива может быть равен (или не равен) nullptr
    ConstIterator begin() const noexcept {
        return ConstIterator(Get());
    }

    // ¬озвращает итератор на элемент, следующий за последним
    // ƒл€ пустого массива может быть равен (или не равен) nullptr
    ConstIterator end() const noexcept {
        return ConstIterator(Get() + row_);
    }

    // ¬озвращает константный итератор на начало массива
    // ƒл€ пустого массива может быть равен (или не равен) nullptr
    ConstIterator cbegin() const noexcept {
        return ConstIterator(Get());
    }

    // ¬озвращает итератор на элемент, следующий за последним
    // ƒл€ пустого массива может быть равен (или не равен) nullptr
    ConstIterator cend() const noexcept {
        return ConstIterator(Get() + row_);
    }

    Array& operator=(const Array&) = delete;
    
 Array& operator=(Array&& other) {
        array_ptr_ = std::move(std::exchange(other.array_ptr_, nullptr));
        row_ = std::move(other.row_);
        col_ = std::move(other.col_);
        return *this;
    }

~Array(){
    if(array_ptr_ != nullptr){
    for(int i = 0; i < row_; ++i){
        delete[] array_ptr_[i];
    }
    delete[] array_ptr_;
    }
}
private:
Type** array_ptr_ = nullptr;
std::size_t row_ = 0;
std::size_t col_ = 0;
};