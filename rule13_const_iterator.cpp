#include <vector>
#include <iostream>


template<typename C, typename V>
void findAndInsert(C& container,
                   const V& targetVal,
                   const V& insertVal){
    using std::cbegin;
    using std::cend;

    auto it = std::find(cbegin(container),
                        cend(container),
                        targetVal);
    container.insert(it, insertVal);

}

int main(){
    std::vector<int> vec{1983,1984,1985};
    findAndInsert(vec, 1983, 1998);

    for(const auto &elem : vec)
        std::cout << elem << " ";
    std::cout << std::endl;

    return 0;
}
