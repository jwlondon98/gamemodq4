
# Game Mod Midterm | Zombies Mod
This readme details a custom zombies mod for Quake 4 as a midterm for a Game Modification class at NJIT. Mod by Jordan London.

## Mod Setup
1. Clone this repository
2. Use master branch
3. Move Custom_Mod folder found in the gamemodq4 folder to your local Quake 4 folder (the folder containing q4base)
4. Run Quake 4
5. Select "mods" at the bottom left of main menu
6. Select "custom_mod". Quake 4 should reboot.
7. Select "New Game" after main menu appears again.

## How to Play
* Standard Quake 4 movement controls
* Press ` to bring up console. Then type "startmod" to start the mod.
* First zombie wave is 3 zombies. Each following wave adds 3 extra zombies.
* Kill all the zombies in a wave to move to the next wave.
* Shooting a zombie gives you 10 points, killing a zombie gives you 100 points.
* As you accumulate points, press "y" to open up the shop. You can then press 1 or 2 to open either the perk shop or the gun shop. For each respective shop you can press its designated number button to purchase the perk/gun if you have enough points.
* Purchasing a perk automatically applies it to your player. Purchasing a gun will spawn it in front of the player. If you run out of ammo, purchase the same gun again.

## Deliverables
#### Unique
* Monsters spawn in waves
* Limit player to 2 weapons at a time
* Point system, show total points after death, use points to buy perks/guns, show point changes with UI
* Modify all weapons
* Create 8 different perks
#### Common
* Code compiles without extra warnings
* Mod project is in a separate self contained folder (Custom_Mod it is named)
* Github Repo contains README explaining how to play and see deliverables
* Shortcut to automatically launch mod
* UI update reflecting feature of mod (points and wave counter)

## Perks
* JUGGERNOG (2500 pts) : Maxes out player's health to 200
* STAMINUP (2000 pts) : Gives player a speed boost
* DOUBLETAP (2000 pts) : Gives player increased fire rate on all weapons (though it can be hard to notice on some)
* JUMPER (2500 pts) : Allows player to jump super high
* ONESHOT (4000 pts) : Zombies die instantly when shot
* NUKEM (5000 pts) : Kills all zombies currently alive in a wave
* DOUBLEPTS (3000 pts) : Points are doubled
* ALLUCANAMMO (4500 pts) : Gives player unlimited ammo

## Weapon Changes
* Added a “numAttacks” definition for easily modifying the number of projectiles that spawn per attack
#### Blaster.def
* flashlightRadius: 400 to 0
* Recoil time: 100 to 50
* Charge time: 1000 now to basically disable charge mode
* Fire rate: 10 to .2
* spread : .2 to 0
* Def_hitscan: hitscan_blaster to hitscan_bullet
* Changed audio to machine gun’s audio
* Changed muzzle flash effect to machine gun’s muzzle flash

#### Machinegun.def
* flashlightRadius: 400 to 0
* recoilTime: 145 to 60
* fireRate: .1 to .02
* Spread: 2 to 1
* zoomFov: 50 to 80
* zoomHideCrosshair: 0 to 1
* Starting ammo increased

#### Rocketlauncher.def
* Spread: 6
* numProjectiles: 3
* Starting ammo increased
* Grenadelauncher.def
* Firerate: 0.1
* numProjectiles: 3
* Projectile speed: 1200
* Starting ammo increased
* Projectile bounce: 5

#### Shotgun.def
* fireRate: 0.2
* Spread: 3
* hitscans: 5
* Projectile change to nail
* Starting ammo increased

#### Nailgun.def
* Projectile changed ot blaster to make it cooler
* fireRate: .01
* Spread: 5
* numProjectiles: 20
* drumSpeed: .01
* Starting ammo increased

#### DMG.def
* fireRate: 2 to .5
* Spread: 30
* numProjectiles: 5
* Starting ammo increased
* Projectile Speed: 250 to 500
* flyEffectAttenuateSpeed: 200 to 450

#### Railgun.def
* Firerate: .3
* Spread: 10
* numProjectiles: 10
* Push: 100000
* Starting ammo increased

#### Napalmgun.def
* Firerate: 0.2
* Projectile bounce: 1
* Projectile speed: 3000
* numProjectiles: 3
* hitScan range: 100000
* hitScan push: 100000
* Starting ammo increased

#### Lightninggun.def
* Removed lightning effects
* Made it look like a mini gun by applying machine gun effects
* Spread increased
* Range decreased
* Starting ammo increased
