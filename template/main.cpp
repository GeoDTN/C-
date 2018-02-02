/*The power of variadic template
 * Tadewos Somano
 * Feb 02/2018
 *
 */
#include <iostream>
template<typename T>
T printStuff(T v){
    std::cout<<"from base"<<std::endl;
    return v;
}

template<typename Tfirst, typename... Trest>
Tfirst printStuff(Tfirst first, Trest ... rests){
   std::cout<<"From Main"<<std::endl;
    return first+printStuff(rests...);
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
    std::cout<<printStuff(3,4,10,4.5)<<std::endl;

    return 0;
}
