/*The power of variadic template
 * Tadewos Somano
 * Feb 02/2018
 *
 */
#include <iostream>
template<typename T>
T sum(T v){
    std::cout<<"from base"<<std::endl;
    return v;
}

template<typename Tfirst, typename... Trest>
Tfirst sum(Tfirst first, Trest ... rests){
   std::cout<<"Count of arguements "<<sizeof...(rests)<<std::endl;
    return first+sum(rests...);
}
/*
template<typename Tfirst>
Tfirst printThings(){
    Tfirst t{printStuff(3,4,10,4.5)};
   return t;
}
*/
int main()
{
    std::cout<<sum(3,4,10,4.5)<<std::endl;

    return 0;
}
