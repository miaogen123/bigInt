#pragma once
#include<string>
#include<functional>
#include<limits>
#include<iostream>
#include<chrono>
#include<random>

const int getRandomInt(int min = 0, int max = 256);

//一个用函数而非模板作为参数的inputUntilTrue
template<typename T>
void inputUntilTrue(T& tobeInput, std::string& msg, std::function<bool(T)> judgeFunc){
	//std::cout<<"in the function"<<std::endl;
	while(!(std::cin>>tobeInput)||!judgeFunc(tobeInput)){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout<<msg;
	}
}

template<typename T,  typename F>
void inputUntilTrue(T& tobeInput, std::string msg, F judgeFunc){
	//std::cout<<"in the template"<<std::endl;
	while(!(std::cin>>tobeInput)||!judgeFunc(tobeInput)){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout<<msg;
	}
}

