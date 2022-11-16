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

#include "makeTaskChemistryReductionMethods.H"

#include "thermoPhysicsTypes.H"

#include "psiReactionThermo.H"
#include "rhoReactionThermo.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
    // Chemistry solvers based on sensibleEnthalpy
    makechemistryTaskReductionMethods(psiReactionThermo, constGasHThermoPhysics);
    makechemistryTaskReductionMethods(psiReactionThermo, gasHThermoPhysics);
    makechemistryTaskReductionMethods
    (
        psiReactionThermo,
        constIncompressibleGasHThermoPhysics
    );
    makechemistryTaskReductionMethods
    (
        psiReactionThermo,
        incompressibleGasHThermoPhysics
    );
    makechemistryTaskReductionMethods(psiReactionThermo, icoPoly8HThermoPhysics);
    makechemistryTaskReductionMethods(psiReactionThermo, constFluidHThermoPhysics);
    makechemistryTaskReductionMethods
    (
        psiReactionThermo,
        constAdiabaticFluidHThermoPhysics
    );
    makechemistryTaskReductionMethods(psiReactionThermo, constHThermoPhysics);


    makechemistryTaskReductionMethods(rhoReactionThermo, constGasHThermoPhysics);
    makechemistryTaskReductionMethods(rhoReactionThermo, gasHThermoPhysics);
    makechemistryTaskReductionMethods
    (
        rhoReactionThermo,
        constIncompressibleGasHThermoPhysics
    );
    makechemistryTaskReductionMethods
    (
        rhoReactionThermo,
        incompressibleGasHThermoPhysics
    );
    makechemistryTaskReductionMethods(rhoReactionThermo, icoPoly8HThermoPhysics);
    makechemistryTaskReductionMethods(rhoReactionThermo, constFluidHThermoPhysics);
    makechemistryTaskReductionMethods
    (
        rhoReactionThermo,
        constAdiabaticFluidHThermoPhysics
    );
    makechemistryTaskReductionMethods(rhoReactionThermo, constHThermoPhysics);



    // Chemistry solvers based on sensibleInternalEnergy
    makechemistryTaskReductionMethods(psiReactionThermo, constGasEThermoPhysics);
    makechemistryTaskReductionMethods(psiReactionThermo, gasEThermoPhysics);
    makechemistryTaskReductionMethods
    (
        psiReactionThermo,
        constIncompressibleGasEThermoPhysics
    );
    makechemistryTaskReductionMethods
    (
        psiReactionThermo,
        incompressibleGasEThermoPhysics
    );
    makechemistryTaskReductionMethods(psiReactionThermo, icoPoly8EThermoPhysics);
    makechemistryTaskReductionMethods(psiReactionThermo, constFluidEThermoPhysics);
    makechemistryTaskReductionMethods
    (
        psiReactionThermo,
        constAdiabaticFluidEThermoPhysics
    );
    makechemistryTaskReductionMethods(psiReactionThermo, constEThermoPhysics);


    makechemistryTaskReductionMethods(rhoReactionThermo, constGasEThermoPhysics);
    makechemistryTaskReductionMethods(rhoReactionThermo, gasEThermoPhysics);
    makechemistryTaskReductionMethods
    (
        rhoReactionThermo,
        constIncompressibleGasEThermoPhysics
    );
    makechemistryTaskReductionMethods
    (
        rhoReactionThermo,
        incompressibleGasEThermoPhysics
    );
    makechemistryTaskReductionMethods(rhoReactionThermo, icoPoly8EThermoPhysics);
    makechemistryTaskReductionMethods(rhoReactionThermo, constFluidEThermoPhysics);
    makechemistryTaskReductionMethods
    (
        rhoReactionThermo,
        constAdiabaticFluidEThermoPhysics
    );
    makechemistryTaskReductionMethods(rhoReactionThermo, constEThermoPhysics);
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
