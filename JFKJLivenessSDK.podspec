Pod::Spec.new do |s|
  s.name         = "JFKJLivenessSDK"
  s.version      = "1.0.0"
  s.summary      = "A powerful SDK for liveness detection."
  s.description  = "JFKJLivenessSDK provides real-time liveness detection with advanced AI models."
  s.homepage     = "https://github.com/wangweiyang8887/JFKJLivenessSDK.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Evan" => "98708887@qq.com" }
  s.source       = { :git => "https://github.com/wangweiyang8887/JFKJLivenessSDK.git", :tag => "1.0.0" }
  s.platform     = :ios, "11.0"
  s.frameworks = "CFNetwork", "CoreTelephony", "MobileCoreServices", "CoreLocation", "AVFoundation", "AudioToolbox", "EventKit", "CoreMedia", "CoreMotion", "Network", "SystemConfiguration", "WebKit"
  s.libraries = "iconv.2", "c++", "z"
  s.vendored_frameworks = "Frameworks/JFKJLivnessSDK.framework"
  s.resources    = "Frameworks/JFKJLivnessSDK.framework/DxmLivenessSDK.bundle"
end
