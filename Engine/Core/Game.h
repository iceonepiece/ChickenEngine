#pragma once

class Game
{
public:
  Game();
	virtual ~Game();

	bool Initialize();
	void Run();
	void Shutdown();
};
