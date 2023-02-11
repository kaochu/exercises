#include <graphics.h>		// 引用图形库头文件
#include <conio.h>			// _getch()头文件
void TODO();

void TODO()
{
	setbkcolor(WHITE);
	RECT r = { 0, 0, 639, 479 };		// 矩形Point(0,0)到Point(639,479)
	settextcolor(BLUE);					// 设置文本颜色为蓝色
	settextstyle(20, 0, _T("宋体"));	// 设置字体高度为20px，宽自适应，字体为宋体
	drawtext(_T("123"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);	// 绘制"123"文本到矩形中，水平居中|垂直居中|限定一行
}
int main()
{
	initgraph(640, 480);	// 创建绘图窗口，大小为 640x480 像素
	TODO();					// 创建完画板后做的事
	_getch();				// 按任意键继续
	closegraph();			// 关闭绘图窗口
	return 0;
}



/*void TODO()
{
	
}

void TODO()
{
	setlinecolor(GREEN);		// 设置线的颜色为绿色
	setlinestyle(PS_SOLID, 3);	// 设置线的样式为实线3px
	line(100, 300, 500, 300);		// 绘制Point(100,300)到Point(500,300)的直线
}

void TODO()
{
	RECT r = { 0, 0, 639, 479 };		// 矩形Point(0,0)到Point(639,479)
	settextcolor(BLUE);					// 设置文本颜色为蓝色
	settextstyle(20, 0, _T("宋体"));	// 设置字体高度为20px，宽自适应，字体为宋体
	drawtext(_T("123"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);	// 绘制"123"文本到矩形中，水平居中|垂直居中|限定一行
}*/
