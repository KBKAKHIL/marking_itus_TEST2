//
//  ViewController.swift
//  ParticleIOSStarter
//
//  Created by Parrot on 2019-06-29.
//  Copyright © 2019 Parrot. All rights reserved.

import UIKit
import Particle_SDK

class ViewController: UIViewController {

    // MARK: User variables
    let USERNAME = "kbkakhil459@gmail.com"
    let PASSWORD = "Kennyakhil27"
    
    // MARK: Device
    
    let DEVICE_ID = "3b0021000247363333343435"
    var myPhoton : ParticleDevice?

  
    @IBOutlet weak var timerLabel: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        
        ParticleCloud.init()
        ParticleCloud.sharedInstance().login(withUser: self.USERNAME, password: self.PASSWORD){ (error:Error?) -> Void in
            if (error != nil) {
                // Something went wrong!
                print("Wrong credentials or as! ParticleCompletionBlock no internet connectivity, please try again")
                // Print out more detailed information
                print(error?.localizedDescription)
            }
            else {
                print("Login success!")
                
                // try to get the device
                self.getDeviceFromCloud()
                
            }
        }
        func action() {
            time += 1
            timerLabel.text = String(time)
        }
      
    }
    
    func getDeviceFromCloud() {
        ParticleCloud.sharedInstance().getDevice(self.DEVICE_ID) { (device:ParticleDevice?, error:Error?) in
            
            if (error != nil) {
                print("Could not get device")
                print(error?.localizedDescription)
                return
            }
            else {
                print("Got photon from cloud: \(device?.id)")
                self.myPhoton = device
                
            }
            
        } 
    }
    var timer = Timer()
    var time = 0
    
    @IBAction func startButton(_ sender: Any) {

        timer = Timer.scheduledTimer(timeInterval: 1, target: self, selector: #selector(option), userInfo: nil, repeats: true)
        if( timerLabel.text == "20"){
            timer.invalidate()
        }
    }
    
 

}

