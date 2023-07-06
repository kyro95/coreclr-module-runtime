#pragma once
#include <cstdint>
#include "data/function_table.h"
#include "core.h"
#include "altv.h"
#include "client.h"
#include "config.h"
#include "core.h"
#include "event.h"
#include "localstorage.h"
#include "map_data.h"
#include "mvalue.h"
#include "resource.h"
#include "weaponData.h"
#include "data/metric.h"
#include "handling_data.h"
#include "entities/audio.h"
#include "entities/audio_output.h"
#include "entities/audio_attached_output.h"
#include "entities/audio_frontend_output.h"
#include "entities/audio_world_output.h"
#include "entities/baseObject.h"
#include "entities/blip.h"
#include "entities/checkpoint.h"
#include "entities/colshape.h"
#include "entities/connection_info.h"
#include "entities/entity.h"
#include "entities/http_client.h"
#include "entities/object.h"
#include "entities/player.h"
#include "entities/ped.h"
#include "entities/virtual_entity.h"
#include "entities/virtual_entitiy_group.h"
#include "entities/rml_document.h"
#include "entities/rml_element.h"
#include "entities/vehicle.h"
#include "entities/voice_channel.h"
#include "entities/websocket_client.h"
#include "entities/webview.h"
#include "entities/worldObject.h"
#include "entities/marker.h"
#include "entities/networkObject.h"
#include "entities/textLabel.h"
#include "entities/audioFilter.h"
#include "entities/local_vehicle.h"
#include "entities/local_ped.h"
#include "entities/font.h"
#include "entities/custom_texture.h"
#include <type_traits>

const function_table_t* get_func_table();