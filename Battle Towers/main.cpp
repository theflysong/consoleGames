#include "head.h"

int main()
{
	I18N::read("./assets/lang/zh_cn.lang");
	cout<<I18N::format("a.n");
	return 0;
} 
