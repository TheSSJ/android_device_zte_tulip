#include <string.h>
#include <dlfcn.h>
#include <math.h>
#include <utils/Log.h>
#include <cutils/native_handle.h>
#include <utils/threads.h>
#include <utils/String8.h>
#include <hardware/hardware.h>
#include <hardware/camera.h>
#include <camera/Camera.h>
#include <camera/CameraParameters2.h>
#include <media/hardware/HardwareAPI.h> // For VideoNativeHandleMetadata
#include <cutils/properties.h>

static android::Mutex gCameraWrapperLock;
int camera_device_open(const hw_module_t *module, const char *name, hw_device_t **device);
