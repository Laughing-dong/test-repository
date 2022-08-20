#include <iostream>
#include <string>

using std::string;

int main()
{
    /*string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1 << s2 << std::endl;
    return 0;*/

    /*string word;
    while(std::cin >> word)
        std::cout << word;*/
    /*string line;
    while(getline(std::cin, line))
        std::cout << line << std::endl;*/
    
    /*int a = -1;
    unsigned int b = 1;
    if(b < a) {
        std::cout << "false" << std::endl;
        std::cout << a << std::endl;
    }*/

    /*string s1 = "Hello,", s2 = "world\n";
    string s3 = s1 + s2;
    s1 += s2;
    std::cout << s3 << std::endl;
    std::cout << s1 << std::endl;*/

    /*string str("some thing");
    for(auto c : str){
        std::cout << c << std::endl;
    }*/

    /*string s("Hello World!!!!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s){
        if (ispunct(c)){
            ++punct_cnt;
        }
        std::cout << punct_cnt << " punctuation characters in " << s << std::endl;
    }*/

    /*string s("Hello World!!!!!");
    for (char &c : s){
        c = toupper(c);
    }
    std::cout << s << "\n";*/

    /*string s("some thing");
    if (!s.empty()){
        s[0] = toupper(s[0]);
    }
    std::cout << s << std::endl;*/

    /*string s("some thing");
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index){
        s[index] = toupper(s[index]);
    }
    std::cout << s << "\n";*/

    const string hexdigits = "0123456789ABCDEF";
    std::cout << "Enter a series of numbers bettween 0 and 15"
              << " separated by spaces. Hit ENTER when finished: "
              << std::endl;
    string result;
    string::size_type n;
    while (std::cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];
    std::cout << "Your hex number is:" << result << std::endl;
    return 0;
}