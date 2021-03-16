#include "openvr-cap.h"

// OpenVR variables
//TrackedDevicePose_t tracked_device_pos[k_unMaxTrackedDeviceCount];

int main()
{
	EVRInitError eError = VRInitError_None;
	vr_pointer = VR_Init(&eError, VRApplication_Background);

	if (eError != VRInitError_None)
	{
		vr_pointer = NULL;

		printf("Failed to init VR runtime: %s\n", VR_GetVRInitErrorAsEnglishDescription(eError));
		exit(EXIT_FAILURE);
	}
}