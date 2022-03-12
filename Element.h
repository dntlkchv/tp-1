class Element{
public:
	Element(int data, Element *prev);
	Element(const Element &Element);

	~Element();
	int getData();
	Element* getPrev();
	void setPrev(Element* prev);

private:
	int data;
	Element *prev;
};