Pod::Spec.new do |s|

  s.name         = "HXPRouter"
  s.version      = "0.0.1"
  s.summary      = "A route jump demo used on IOS"

  s.description  = <<-DESC
			 this is a route jump demo,this is a route jump demo,this is a route jump demo,this is a route jump demo
		   DESC

  s.homepage     = "https://github.com/HuZhonYinXiang/HXRouter"
  # s.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"

  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }

  s.author             = { "胡欣" => "391607077@qq.com" }
  # Or just: s.author    = "胡欣"
  # s.authors            = { "胡欣" => "391607077@qq.com" }
  # s.social_media_url   = "http://twitter.com/胡欣"

  # s.platform     = :ios
  s.platform     = :ios, "9.0"

  s.source       = { :git => "https://github.com/HuZhonYinXiang/HXRouter.git", :tag => "#{s.version}" }

  s.source_files  = "Classes", "Classes/**/*.{h,m}"
  s.exclude_files = "Classes/Exclude"

  # s.public_header_files = "Classes/**/*.h"

  # s.resource  = "icon.png"
  # s.resources = "Resources/*.png"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"

  s.vendored_frameworks = "HXPRouter.framework"
  s.framework  = "Foundation"
  # s.frameworks = "SomeFramework", "AnotherFramework"

  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"

  # s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end
