// Fluid Conditioning Containment Vessel
$fn = 100; // Fragment resolution

vessel_height = 450;    // Structural height in mm
inner_radius = 120;     // Internal processing cavity radius in mm
jacket_thickness = 15;  // Thermal fluid jacket sleeve thickness in mm
port_diameter = 25.4;   // Tri-clamp interface utility port diameter in mm

module processing_core() {
    difference() {
        // Main Outer Shell
        cylinder(h=vessel_height, r=inner_radius + jacket_thickness, center=true);
        // Internal Cavity Excavation
        cylinder(h=vessel_height - 20, r=inner_radius, center=true);
    }
}

module inlet_port() {
    rotate([90, 0, 0])
    cylinder(h=inner_radius * 2, r=port_diameter / 2, center=true);
}

// Assemble full system geometry
union() {
    processing_core();
    translate([0, 0, vessel_height / 3]) inlet_port();
    translate([0, 0, -vessel_height / 3]) inlet_port();
}
