#include <iostream>
#include <include/TutorialConfig.h>
#include <string>
#ifdef USE_MYMATH
    #include <MathFunctions.h>
#endif
void print_platform(){
    
#ifdef _WIN32
	std::cout << "platform: windows" << std::endl;
#elif __linux__
	std::cout << "platform: linux" << std::endl;
#endif

}
int main(int argc, char* argv[]){
    print_platform();
    std::cout << HELLO_CMAKE << std::endl;
    std::cout << "PATH_PROJECT: "<< PATH_PROJECT << std::endl;
    double x;
    double outputValue = 0;
    if (argc<2){
        x = 2.0;
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
    }else{
        x = std::stod(argv[1]);
    }

    
#ifdef USE_MYMATH
    outputValue = my_func(x);
    std::cout << "use mymath" << std::endl;
    std::cout << "outputValue: " << outputValue << std::endl;
#else
    outputValue = 3.0 * x;
    std::cout << "outputValue: " << outputValue << std::endl;
#endif

    return 0;
}