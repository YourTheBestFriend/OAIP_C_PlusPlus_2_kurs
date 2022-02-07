#pragma once
using namespace System;
namespace form1
{
	public delegate void MyDelegate(String^ data);//в пространстве имен программы form1 глобально декларируем делегат как ссылку на метод, который принимает объект типа String ^ (это управл€емый —борщиком мусора указатель на строку символов(char'овский массив)) и ничего не возвращает (void)
}