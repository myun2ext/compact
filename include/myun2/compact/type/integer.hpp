#ifndef __github_com_myun2__compact__type__integer_HPP__
#define __github_com_myun2__compact__type__integer_HPP__

namespace myun2
{
	namespace compact
	{
		namespace type
		{
			template <typename T>
			class integer
			{
			private:
				T value;
			public:
				integer() : value(0) {}
				integer(const T& v_in) : value(v_in) {}

				const void* serialize_value() const { return &value; }
				unsigned int size() const { return sizeof(T); }
			};

			typedef integer<float> float_value;
			typedef integer<double> double_value;
		}
	}
}

#endif//__github_com_myun2__compact__type__integer_HPP__
