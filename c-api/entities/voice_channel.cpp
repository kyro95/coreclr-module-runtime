#include "voice_channel.h"

#include "../mvalue.h"

uint32_t VoiceChannel_GetID(alt::IVoiceChannel* voiceChannel)
{
    return voiceChannel->GetID();
}

#ifdef ALT_SERVER_API

alt::IBaseObject* VoiceChannel_GetBaseObject(alt::IVoiceChannel* channel) {
    return dynamic_cast<alt::IBaseObject*>(channel);
}

alt::MValueConst* VoiceChannel_GetMetaData(alt::IVoiceChannel* voiceChannel, const char* key) {
    return AllocMValue(voiceChannel->GetMetaData(key));
}

void VoiceChannel_SetMetaData(alt::IVoiceChannel* channel, const char* key, alt::MValueConst* val) {
    if (val == nullptr) return;
    channel->SetMetaData(key, val->get()->Clone());
}

uint8_t VoiceChannel_HasMetaData(alt::IVoiceChannel* voiceChannel, const char* key) {
    return voiceChannel->HasMetaData(key);
}

void VoiceChannel_DeleteMetaData(alt::IVoiceChannel* voiceChannel, const char* key) {
    voiceChannel->DeleteMetaData(key);
}

void VoiceChannel_AddPlayer(alt::IVoiceChannel* channel, alt::IPlayer* player) {
    channel->AddPlayer(player);
}

void VoiceChannel_RemovePlayer(alt::IVoiceChannel* channel, alt::IPlayer* player) {
    channel->RemovePlayer(player);
}

void VoiceChannel_MutePlayer(alt::IVoiceChannel* channel, alt::IPlayer* player) {
    channel->MutePlayer(player);
}

void VoiceChannel_UnmutePlayer(alt::IVoiceChannel* channel, alt::IPlayer* player) {
    channel->UnmutePlayer(player);
}

uint8_t VoiceChannel_IsPlayerConnected(alt::IVoiceChannel* channel, alt::IPlayer* player) {
    return channel->HasPlayer(player);
}

uint8_t VoiceChannel_HasPlayer(alt::IVoiceChannel* channel, alt::IPlayer* player) {
    return channel->HasPlayer(player);
}

uint8_t VoiceChannel_IsPlayerMuted(alt::IVoiceChannel* channel, alt::IPlayer* player) {
    return channel->IsPlayerMuted(player);
}

uint8_t VoiceChannel_IsSpatial(alt::IVoiceChannel* channel) {
    return channel->IsSpatial();
}

float VoiceChannel_GetMaxDistance(alt::IVoiceChannel* channel) {
    return channel->GetMaxDistance();
}

uint32_t VoiceChannel_GetFilter(alt::IVoiceChannel* channel)
{
    return channel->GetFilter();
}

void VoiceChannel_SetFilter(alt::IVoiceChannel* channel, uint32_t filter)
{
    channel->SetFilter(filter);
}

int32_t VoiceChannel_GetPriority(alt::IVoiceChannel* channel)
{
    return channel->GetPriority();
}

void VoiceChannel_SetPriority(alt::IVoiceChannel* channel, int32_t priority)
{
    channel->SetPriority(priority);
}
#endif
