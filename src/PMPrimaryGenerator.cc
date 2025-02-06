#include "PMPrimaryGenerator.hh"

PMPrimaryGenerator::PMPrimaryGenerator()
{
   
    G4int no_particle_per_event = 1;
    fParticleGun = new G4ParticleGun(no_particle_per_event);
    
    //Position of particle

        G4double x = 0.*m;
        G4double y = 0.*m;
        G4double z = 0.*m;

        G4ThreeVector pos(x,y,z);

        //Partixle direction
        G4double px = 0.;
        G4double py = 0.;
        G4double pz = 0.;
        
        G4ThreeVector mom(px,py,pz);

        //Particle type and defination from the particle table
        G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
        G4ParticleDefinition *particle = particleTable->FindParticle("e+");
        
        fParticleGun->SetParticlePosition(pos);
        fParticleGun->SetParticleMomentum(mom);
        fParticleGun->SetParticleEnergy(1.*GeV);
        fParticleGun->SetParticleDefinition(particle);
}

PMPrimaryGenerator::~PMPrimaryGenerator()
{
    delete fParticleGun;
}

void PMPrimaryGenerator::GeneratePrimaries(G4Event*anEvent)
{
    fParticleGun->GeneratePrimaryVertex(anEvent);
}