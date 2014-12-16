Pod::Spec.new do |spec|
  spec.name     = 'ANHelperFunctions'
  spec.version  = '1.0'
  spec.license  = { :type => 'MIT' }
  spec.homepage = 'https://github.com/anodamobi/ANHelperFunctions'
  spec.authors  = { 'Oksana Kovalchuk' => 'oksana@anoda.mobi' }
  spec.summary  = 'A set of small useful helpers for iOS development'
  spec.source   = { :git => 'https://github.com/anodamobi/ANHelperFunctions.git', :tag => '1.0' }

  spec.source_files =  "*.{h,m}"

  spec.framework = "Foundation", "UIKit"
  spec.requires_arc = true

end