#include <iostream>
#include <string>

template <typename T, typename U, typename I>
class triad {
private:
	T m_first{};
	U m_second{};
	I m_third{};

public:
	explicit triad(const T& first) : m_first{first}{};
	triad(const T& first, const U& second, const I& third) : m_first{first}, m_second{second}, m_third{third}{}

	int first() {
		return m_first;
	}

	void print() const ;
};

template <typename T, typename U, typename I>
void triad<T, U, I>::print() const  {
	std::cout << "[" << m_first << ", " << m_second << ", " << m_third << "]";
}

int main()
{
	triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}