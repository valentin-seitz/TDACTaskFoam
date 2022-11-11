/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2016-2017 OpenFOAM Foundation
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "makeChemistryTaskTabulationMethods.H"

#include "thermoPhysicsTypes.H"

#include "psiReactionThermo.H"
#include "rhoReactionThermo.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
    // Chemistry solvers based on sensibleEnthalpy
    makechemistryTaskTabulationMethods(psiReactionThermo, constGasHThermoPhysics);
    makechemistryTaskTabulationMethods(psiReactionThermo, gasHThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        psiReactionThermo,
        constIncompressibleGasHThermoPhysics
    );
    makechemistryTaskTabulationMethods
    (
        psiReactionThermo,
        incompressibleGasHThermoPhysics
    );
    makechemistryTaskTabulationMethods(psiReactionThermo, icoPoly8HThermoPhysics);
    makechemistryTaskTabulationMethods(psiReactionThermo, constFluidHThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        psiReactionThermo,
        constAdiabaticFluidHThermoPhysics
    );
    makechemistryTaskTabulationMethods(psiReactionThermo, constHThermoPhysics);


    makechemistryTaskTabulationMethods(rhoReactionThermo, constGasHThermoPhysics);

    makechemistryTaskTabulationMethods(rhoReactionThermo, gasHThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        rhoReactionThermo,
        constIncompressibleGasHThermoPhysics
    );
    makechemistryTaskTabulationMethods
    (
        rhoReactionThermo,
        incompressibleGasHThermoPhysics
    );
    makechemistryTaskTabulationMethods(rhoReactionThermo, icoPoly8HThermoPhysics);
    makechemistryTaskTabulationMethods(rhoReactionThermo, constFluidHThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        rhoReactionThermo,
        constAdiabaticFluidHThermoPhysics
    );
    makechemistryTaskTabulationMethods(rhoReactionThermo, constHThermoPhysics);


    // Chemistry solvers based on sensibleInternalEnergy

    makechemistryTaskTabulationMethods(psiReactionThermo, constGasEThermoPhysics);

    makechemistryTaskTabulationMethods(psiReactionThermo, gasEThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        psiReactionThermo,
        constIncompressibleGasEThermoPhysics
    );
    makechemistryTaskTabulationMethods
    (
        psiReactionThermo,
        incompressibleGasEThermoPhysics
    );
    makechemistryTaskTabulationMethods(psiReactionThermo, icoPoly8EThermoPhysics);
    makechemistryTaskTabulationMethods(psiReactionThermo, constFluidEThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        psiReactionThermo,
        constAdiabaticFluidEThermoPhysics
    );
    makechemistryTaskTabulationMethods(psiReactionThermo, constEThermoPhysics);


    makechemistryTaskTabulationMethods(rhoReactionThermo, constGasEThermoPhysics);

    makechemistryTaskTabulationMethods(rhoReactionThermo, gasEThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        rhoReactionThermo,
        constIncompressibleGasEThermoPhysics
    );
    makechemistryTaskTabulationMethods
    (
        rhoReactionThermo,
        incompressibleGasEThermoPhysics
    );
    makechemistryTaskTabulationMethods(rhoReactionThermo, icoPoly8EThermoPhysics);
    makechemistryTaskTabulationMethods(rhoReactionThermo, constFluidEThermoPhysics);
    makechemistryTaskTabulationMethods
    (
        rhoReactionThermo,
        constAdiabaticFluidEThermoPhysics
    );
    makechemistryTaskTabulationMethods(rhoReactionThermo, constEThermoPhysics);

}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
