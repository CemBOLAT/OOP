#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, std::string> planets;

	planets["Mercury"] = "Hot planet";
	planets["Venus"] = "Atmosphere of sulfuric acid";
	planets["Earth"] = "Home";
	planets["Mars"] = "The Red Planet";
	planets["Jupiter"] = "Largest planet in our solar system";
	planets["Saturn"] = "Has rings";
	planets["Uranus"] = "Tilts on its side";
	planets["Neptune"] = "1500 mile-per-hour winds";
	planets["Pluto"] = "Dwarf planet";

	std::cout << "Entry for Mercury - " << planets["Mercury"] << "\n\n";

	if (planets.find("Mercury") != planets.end())
		std::cout << "Mercury is in the map.\n";

	if (planets.find("Ceres") == planets.end())
		std::cout << "Ceres is not in the map.\n\n";

	std::cout << "Iterating through all planets:\n";
	for (auto iter = planets.begin(); iter != planets.end(); ++iter)
		std::cout << iter->first << " - " << iter->second << "\n";

	return 0;
}
