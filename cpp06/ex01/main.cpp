#include "Data.hpp"
#include <stdint.h>
using std::cout;
using std::endl;

uintptr_t serialize(Data* ptr)
{
	uintptr_t	dptr = reinterpret_cast<uintptr_t>(ptr->getData());
	return (dptr);
}

Data* deserialize(uintptr_t raw)
{
	Data *data = new Data((uintptr_t*)raw);
	return (data);
}

int	main(void)
{
	int			i = 42;
	Data		*data = new Data(&i);
	uintptr_t	dptr = serialize(data);

	cout << data->getData() << " " << dptr << endl;
	Data *data1 = deserialize(dptr);
	cout << data->getData() << " " << serialize(data1) << endl;
	return (0);
}