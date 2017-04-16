// Hilltown Games (C).

/*
 * Freeze Pickup
 * =============
 *
 * Created:		2017/03/04 19:45
 * Class Name:	AC_FreezePickup
 * Base Class:	AC_BasePickup
 * Author(s):	Jason Mottershead
 *
 * Purpose:		Provides more specific functionality for freeze pickup.
 */

#pragma once

#include "Pickups/C_BasePickup.h"
#include "C_FreezePickup.generated.h"

UCLASS()
class AMAZABALLZ_API AC_FreezePickup : public AC_BasePickup
{
	GENERATED_BODY()

	protected:
		virtual void PickupResponse(AActor* actor) override;
		virtual void PickupDestroy() override;

		void ApplyPickupEffect() override;
		void UndoPickupEffect() override;

	private:
		UPROPERTY(EditAnywhere, Category = "Pickup Properties")	// How long will all of the other players be frozen for?
			float freeze_timer_;

		bool picked_up_ = false;
		FTimerHandle unused_handle_;
		AC_Character* interacting_player_;

		void UnFreeze();
};