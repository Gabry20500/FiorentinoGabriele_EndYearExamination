#include "Classes/game_object.h"
#include <SFML/System.hpp>
#include "dll_header.h"

class DECLSPEC GameManager
{
public:
	GameManager();
	~GameManager();

public:
	void update(float DeltaTime);
	std::vector<GameObject*> allEntities;
};