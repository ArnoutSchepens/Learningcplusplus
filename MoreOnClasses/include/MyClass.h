
#ifndef  MOREONCLASSES_MYCLASS_H
#define  MOREONCLASSES_MYCLASS_H


class MyClass
{
  private:
	int var;
	const int varConst;
	
  protected:
	
  public:
	MyClass();
	MyClass(int a, int b);
	~MyClass();
	void myPrint();
	void myPrintConst() const;

};


#endif