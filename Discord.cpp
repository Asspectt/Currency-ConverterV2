#include "Discord.h"
#include <ctime>
#include <chrono>


int timer()
{
    std::int64_t t = std::time(0);
    return t;
}


void Discord::Initialize()
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("823634029286916146", &Handle, 1, NULL); // inside of the quotes, put your client ID from discord dev portal.

}

void Discord::Update()  // change this as you want!
{
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.state = "Converting";
    discordPresence.details = "Converting Currency's lol";
    discordPresence.startTimestamp = timer();
    discordPresence.largeImageKey = "currency";
    discordPresence.largeImageText = "Aspect's Currency Converter";
    discordPresence.smallImageKey = "cool_dawg";
    Discord_UpdatePresence(&discordPresence);
}